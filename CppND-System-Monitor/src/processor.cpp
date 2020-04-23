#include "processor.h"

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() { 
  std::vector<std::string> jiffies_list = LinuxParser::CpuUtilization();
  
  for (size_t i{0}; i<jiffies_list.size();i++){
    if (i!=LinuxParser::kGuest_ and i!=LinuxParser::kGuestNice_){
    	total_jiffies += std::stof(jiffies_list[i]);
    }
    if (i==LinuxParser::kIdle_ or i==LinuxParser::kIOwait_){
    	idle_jiffies += std::stof(jiffies_list[i]);
    }
  }
  util_jiffies = total_jiffies - idle_jiffies;
  
  bool curr_util = true;
  if (curr_util){
//     std::cout << "util:" << util_jiffies << " prev:" << util_jiffies_prev << " substruct:" << util_jiffies-util_jiffies_prev << std::endl;
//     std::cout << "util:" << total_jiffies << " prev:" << total_jiffies_prev << " substruct:" << total_jiffies-total_jiffies_prev << std::endl;
    usage = (util_jiffies-util_jiffies_prev)/(total_jiffies-total_jiffies_prev);
    total_jiffies_prev = total_jiffies;
    util_jiffies_prev = util_jiffies;
  }
  else{
    usage = util_jiffies/total_jiffies;
  }
  
  return usage; 
}
#include <unistd.h>
#include <cctype>
#include <sstream>
#include <vector>
#include <iostream>

#include "process.h"

using std::string;
using std::to_string;
using std::vector;

Process::Process(int pid) {
  _pid = pid;
  _cpu_util = Process::CpuUtilization();
  _cmd = LinuxParser::Command(_pid);
}

// TODO: Return this process's ID
int Process::Pid() { return _pid; }

// TODO: Return this process's CPU utilization
float Process::CpuUtilization() { 
  long int Hz = sysconf(_SC_CLK_TCK);
  _total_time = LinuxParser::ActiveJiffies(_pid)/ Hz; 
  _seconds = LinuxParser::UpTime(_pid);
  return _total_time/_seconds;}

// TODO: Return the command that generated this process
string Process::Command() { return _cmd; }

// TODO: Return this process's memory utilization
string Process::Ram() { return LinuxParser::Ram(_pid); }

// TODO: Return the user (name) that generated this process
string Process::User() { return LinuxParser::User(_pid); }

// TODO: Return the age of this process (in seconds)
long int Process::UpTime() { return LinuxParser::UpTime(_pid); }

// TODO: Overload the "less than" comparison operator for Process objects
// REMOVE: [[maybe_unused]] once you define the function
bool Process::operator<(Process const& a) const { 
  return _cpu_util > a._cpu_util; 
}
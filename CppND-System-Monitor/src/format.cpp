#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) { 
  long HH{seconds/3600};
  long H_re{seconds%3600};
  long MM{H_re/60};
  long SS{H_re%60};
  string HH_str{std::to_string(HH)};
  string MM_str{std::to_string(MM)};
  string SS_str{std::to_string(SS)};
  string time{HH_str+':'+MM_str+':'+SS_str};
  return time;
}
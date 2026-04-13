#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int colon=line.find(":");
    return line.substr(colon+2);
}

std::string log_level(std::string line) {
    // return the log level
    int open_brac=line.find("[");
    int close_brac=line.find("]");
    return line.substr(open_brac+1,close_brac-1);
}

std::string reformat(std::string line) {
    // return the reformatted message
    int colon=line.find(":");
    int open_brac=line.find("[");
    int close_brac=line.find("]");
    return line.substr(colon+2)+" ("+line.substr(open_brac+1,close_brac-1)+")";
}
}  // namespace log_line
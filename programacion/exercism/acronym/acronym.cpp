#include "acronym.h"
#include <string>

namespace acronym {
  std::string acronym(std::string phrase) {
    std::string acronym {""};
    for (long unsigned int i {0}; i < phrase.size(); ++i) {
      if (i==0) {
        acronym += phrase[i];
      }
      else if ((phrase[i] == ' ') || (phrase[i] == '-')){
        if (phrase[i+1]=='_') {
          int n{1};
          bool added{false};
          while (!added) {
            if ((phrase[i+n] >= 65) && (phrase[i+n] <= 90)) {
              acronym += phrase[i+n];
              added = true;
            }
            else if ((phrase[i+n] >= 97) && (phrase[i+n] <= 122)) {
              char lowerChar = phrase[i+n] - 32;
              acronym += lowerChar;
              added = true;
            }
            ++n;
          }
        }
        else {
          if ((phrase[i+1] >= 65) && (phrase[i+1] <= 90)) {
            acronym += phrase[i+1];
          }
          else if ((phrase[i+1] >= 97) && (phrase[i+1] <= 122)) {
            char lowerChar = phrase[i+1] - 32;
            acronym += lowerChar;
          }
        }
      }
    }

    return acronym;
  }

}  // namespace acronym

#ifndef _ITF_DECODABLE_ITF_H_
#define _ITF_DECODABLE_ITF_H_ 1

#include <fst/types.h>
#include <iostream>

namespace athena {

class DecodableInterface {
 public:
  virtual BaseFloat LogLikelihood(int32 frame, int32 index) = 0;

  virtual bool IsLastFrame(int32 frame) const = 0;

  virtual bool IsBlankFrame(int32 frame) const {
      return false;
  } 
  virtual bool IsCTCPrune() const {
      return false;
  } 

  virtual int32 NumFramesReady() const {
      std::cerr << "NumFramesReady() not implemented for this decodable type.";
    return -1;
  }
  virtual int32 NumIndices() const = 0;

  virtual ~DecodableInterface() {}
};
}  

#endif  
#include "nmn.h" 
const int nmn::sz = 10; 
const int nmn::lnw = 15; 
nmn::nmn(ImgDraw imgdraw, int w) 
  :draw(imgdraw), width(w) { } 

nmn::note::note(int tone0, int semi0, int octave0, int dd1, int dd2) 
  :tone(tone0), semi(semi0), octave(octave0), dura1(dd1), dura2(dd2) {
  //essential task is to compute width, which I skip now! 
  width = nmn::sz * 2; 
} 


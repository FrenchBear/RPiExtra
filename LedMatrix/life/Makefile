CXXFLAGS=-Wall -O3 -g

# Where our library resides. It is split between includes and the binary
# library in lib
RGB_INCDIR=../hzeller-rpi-rgb-led-matrix/include
RGB_LIBDIR=../hzeller-rpi-rgb-led-matrix/lib
RGB_LIBRARY_NAME=rgbmatrix
RGB_LIBRARY=$(RGB_LIBDIR)/lib$(RGB_LIBRARY_NAME).a
LDFLAGS+=-L$(RGB_LIBDIR) -l$(RGB_LIBRARY_NAME) -lrt -lm -lpthread
CXXFLAGS+=-I$(RGB_INCDIR)


life : life.cc
	$(CXX) $(CXXFLAGS) life.cc -o $@ $(LDFLAGS)

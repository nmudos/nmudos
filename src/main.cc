// In mainlib.cc
//extern "C" {
//int driver_main(int argc, char **argv);
//}
#include "nmudos/nmudos.h"

int main(int argc, char **argv) { 
    //driver_main(argc, argv); 
    nmudos::entry::getInstance().run(argc, argv);
}

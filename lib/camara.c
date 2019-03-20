#include <camara.h>
#include <stdlib.h>

void takePhoto(){
    system("fswebcam -r 1280x720 --no-banner photo.jpg");
}
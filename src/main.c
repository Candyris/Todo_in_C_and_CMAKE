#include <stdio.h>
#include "App/App.h"
int main(int argc, char** argv)
{

    App_t app;
    App_create(&app);
    App_main(&app);
    App_close(&app);


}

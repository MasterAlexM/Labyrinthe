#include "App.h"

int main()
{
    App* app = new App();

    while(app->run()){};

    app->stop();
    
    delete(app);

    return 0;
}
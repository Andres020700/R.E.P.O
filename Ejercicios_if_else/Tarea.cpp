// Haz un programa en base a lo que hiciste un fin de semana usando if, else, else if
//(puede ser ir a correr, ir al museo,una salida al cine ,etc)

// Our program is based in a day that i went to run and I choosed the distance, and we will calculate
// the pace per km, also we will ask if he needs a advice to improve

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int advice;
    double pace;
    float time, distance;

    cout << "Hi hector, could you write the kilometers that you run " << endl;
    cin >> distance;
    cout << "                                                               " << endl;

    cout << "Now, could you write the time that you finished the workout (in minutes)" << endl;
    cin >> time;
    cout << "                                                               " << endl;

    cout << "I see that you ran " << distance;
    cout << " kilometers and your time was " << time;
    cout << " minutes, let me check." << endl;

    pace = time / distance;
    cout << "                                                               " << endl;

    cout << "The race pace of your workout is approximately " << pace;
    cout << " km/min." << endl;
    cout << "                                                               " << endl;
    cout << "Now, I'm gonna tell you some advices to improve while are running" << endl;
    cout << "                                                               " << endl;
    cout << "Write 1 if you want advices to improve your speed when you run" << endl;
    cout << "                                                               " << endl;
    cout << "Write 2 if you want advices to improve your technique when you run" << endl;
    cout << "                                                               " << endl;
    cout << "Write 3 if you want advices to improve the distance when you run" << endl;
    cout << "                                                               " << endl;
    cout << "Write 4 if you don't want a advice" << endl;
    cout << "                                                               " << endl;
    cin >> advice;

    if (advice == 1)
    {
        cout << "To improve the speed is necessary perform strength exercises." << endl;
        cout << "When you do strenght exercise, your body gets less tired when running" << endl;
    }
    else if (advice == 2)
    {
        cout << "To improve your running technique, it's essential to work on your posture stride cadence," << endl;
        cout << "breathing, and strength. It's recommended to avoid long strides," << endl;
        cout << "maintain an upright posture with your gaze forward, relax your shoulders and arms, and land on the midfoot." << endl;
    }
    else if (advice == 3)
    {
        cout << "To run longer distances, it's crucial to train gradually, prioritize recovery," << endl;
        cout << "and listen to your body. Gradually increase your weekly running mileage by about 10 % to" << endl;
        cout << "avoid injury. It's also important to incorporate strength and mobility training to improve efficiency and prevent injury." << endl;
    }
    else
    {
        cout << "See you in the next race" << endl;
    }

    return 0;
}

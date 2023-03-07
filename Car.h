#include "string"

using namespace std;

class Car
{
private:
    int yearModel;
    string make;
    int speed;

public:
    /**
     * @brief Construct a new Car object
     *
     * @param a_yearModel
     * @param a_make
     */
    Car(const int &a_yearModel, const string &a_make);

    /**
     * @brief Get the Year Model object
     *
     * @return int
     */
    int getYearModel() const;

    /**
     * @brief Get the Make object
     *
     * @return string
     */
    string getMake() const;

    /**
     * @brief Get the Speed object
     *
     * @return int
     */
    int getSpeed() const;

    /**
     * @brief add 5 to the speed
     *
     */
    void accelerate();

    /**
     * @brief subtract 5 from the speed
     *
     */
    void brake();
};

Car::Car(const int &a_yearModel, const string &a_make)
{
    yearModel = a_yearModel;
    make = a_make;
    speed = 0;
}

int Car::getYearModel() const
{
    return yearModel;
}

string Car::getMake() const
{
    return make;
}

int Car::getSpeed() const
{
    return speed;
}

void Car::accelerate()
{
    speed += 5;
    if (speed < 0)
        speed = 0;
}

void Car::brake()
{
    speed -= 5;
    if (speed < 0)
        speed = 0;
}

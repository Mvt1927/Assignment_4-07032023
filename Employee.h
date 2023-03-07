#include "string"

using namespace std;

/**
 * @brief a class named Employee
 *
 */
class Employee
{
private:
    /**
     * @brief A string that holds the employee’s name
     *
     */
    string name;

    /**
     * @brief An int variable that holds the employee’s ID number
     *
     */
    int idNumber;

    /**
     * @brief A string that holds the name of the department where the employee works
     *
     */
    string department;

    /**
     * @brief A string that holds the employee’s job title
     *
     */
    string position;

public:
    /**
     * @brief Construct a new Employee object
     *
     * @param a_name
     * @param a_idNumber
     * @param a_department
     * @param a_position
     */
    Employee(const string &a_name, const int &a_idNumber, const string &a_department, const string &a_position);

    /**
     * @brief Construct a new Employee object
     *
     * @param a_name
     * @param a_idNumber
     */
    Employee(const string &a_name, const int &a_idNumber);

    /**
     * @brief Construct a new Employee object
     *
     */
    Employee();

    /**
     * @brief Get the Name object
     *
     * @return string
     */
    string getName() const;

    /**
     * @brief Get the Id Number object
     *
     * @return int
     */
    int getIdNumber() const;

    /**
     * @brief Get the Department object
     *
     * @return string
     */
    string getDepartment() const;
    /**
     * @brief Get the Position object
     *
     * @return string
     */
    string getPosition() const;

    /**
     * @brief Set the Name object
     *
     * @param a_name
     */
    void setName(const string &a_name);

    /**
     * @brief Set the Id Number object
     *
     * @param a_idNumber
     */
    void setIdNumber(const int &a_idNumber);

    /**
     * @brief Set the Department object
     *
     * @param a_department
     */
    void setDepartment(const string &a_department);

    /**
     * @brief Set the Position object
     *
     * @param a_position
     */
    void setPosition(const string &a_position);
};

Employee::Employee(const string &a_name, const int &a_idNumber, const string &a_department, const string &a_position)
{
    name = a_name;
    idNumber = a_idNumber;
    department = a_department;
    position = a_position;
}

Employee::Employee(const string &a_name, const int &a_idNumber)
{
    name = a_name;
    idNumber = a_idNumber;
    department = "";
    position = "";
}

Employee::Employee()
{
    name = "";
    idNumber = 0;
    department = "";
    position = "";
}

string Employee::getName() const
{
    return name;
}

int Employee::getIdNumber() const
{
    return idNumber;
}

string Employee::getDepartment() const
{
    return department;
}

string Employee::getPosition() const
{
    return position;
}

void Employee::setName(const string &a_name)
{
    name = a_name;
}

void Employee::setIdNumber(const int &a_idNumber)
{
    idNumber = a_idNumber;
}

void Employee::setDepartment(const string &a_department)
{
    department = a_department;
}

void Employee::setPosition(const string &a_position)
{
    position = a_position;
}

#include <iostream>
#include <vector>
#include <string>

class Person
{
private:
    std::string name;
    int age;

public:
    Person(const std::string &name, int age) : name(name), age(age) {}

    std::string getName() const { return name; }
    void setName(const std::string &n) { name = n; }

    int getAge() const { return age; }
    void setAge(int a) { age = a; }

    virtual std::string getRole() const
    {
        return "Person";
    }

    virtual ~Person() = default;
};

class Course
{
private:
    std::string courseName;
    std::string courseCode;

public:
    Course(const std::string &name, const std::string &code)
        : courseName(name), courseCode(code) {}

    std::string getCourseInfo() const
    {
        return courseCode + ": " + courseName;
    }
};

class Student : public Person
{
private:
    std::string studentID;
    std::vector<Course> courses;

public:
    Student(const std::string &name, int age, const std::string &id)
        : Person(name, age), studentID(id) {}

    void enrollCourse(const Course &course)
    {
        courses.push_back(course);
    }

    void showCourses() const
    {
        std::cout << getName() << "'s courses:\n";
        for (const auto &course : courses)
        {
            std::cout << "  - " << course.getCourseInfo() << std::endl;
        }
    }

    std::string getRole() const override
    {
        return "Student";
    }

    std::string getStudentID() const { return studentID; }
};

class Teacher : public Person
{
private:
    std::string employeeID;
    std::string department;

public:
    Teacher(const std::string &name, int age, const std::string &empId, const std::string &dept)
        : Person(name, age), employeeID(empId), department(dept) {}

    std::string getRole() const override
    {
        return "Teacher";
    }

    std::string getDepartment() const { return department; }
    std::string getEmployeeID() const { return employeeID; }
};

int main()
{
    Course math("Mathematics", "MATH101");
    Course physics("Physics", "PHY101");

    Student student1("Alice", 20, "S12345");
    student1.enrollCourse(math);
    student1.enrollCourse(physics);

    Teacher teacher1("Bob", 45, "T98765", "Science Department");

    std::cout << student1.getName() << " is a " << student1.getRole() << std::endl;
    student1.showCourses();

    std::cout << teacher1.getName() << " is a " << teacher1.getRole()
              << " in " << teacher1.getDepartment() << std::endl;

    return 0;
}

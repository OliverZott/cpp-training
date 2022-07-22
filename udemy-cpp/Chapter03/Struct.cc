#include <iostream>

// enum values are integer
// enum value are uppercase
// enum value are constants

// two enums cannot shareshare the same name
// no variable can have a name reserved by enum
// enums are not type-safe
// SOLUTION --> 'enum class'

// also enum-class type definitions (:)

enum class PermissionLevel : int
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4,
};


enum class ExamPerson
{
    STUDENT,
    TUTOR,
};


struct UserData
{
    char name[128];
    int id;
    PermissionLevel permissionLevel;
    ExamPerson examPerson;
};


void greet_by_permission_level(UserData userData)
{
    PermissionLevel level = userData.permissionLevel;

    switch (level)
    {
    case PermissionLevel::ADMIN:
        std::cout << "Hello admin" << std::endl;
        break;
    case PermissionLevel::STUDENT:
        std::cout << "Hello student" << std::endl;
        break;
    case PermissionLevel::TUTOR:
        std::cout << "Hello tutor" << std::endl;
        break;
    default:
        std::cout << "Hello tutor" << std::endl;
        break;
    }
}


int main()
{
    UserData olli = {"Olli", 1234523, PermissionLevel::ADMIN, ExamPerson::TUTOR};

    greet_by_permission_level(olli);

    return 0;
}

/*
enum values are integer
enum value are uppercase
enum value are constants

two enums cannot shareshare the same name
no variable can have a name reserved by enum
enums are not type-safe
SOLUTION --> 'enum class'

also enum-class type definitions (:)
*/
#include <iostream>

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
    std::string name;
    std::uint32_t id;
    PermissionLevel permissionLevel;
    ExamPerson examPerson;
};

void greet_by_permission_level(UserData &user)
{
    PermissionLevel level = user.permissionLevel;

    std::cout << "User " << user.name << " has id " << user.id << " and is ";

    switch (level)
    {
    case PermissionLevel::ADMIN:
        std::cout << "admin" << std::endl;
        break;
    case PermissionLevel::STUDENT:
        std::cout << "student" << std::endl;
        break;
    case PermissionLevel::TUTOR:
        std::cout << "tutor" << std::endl;
        break;
    default:
        std::cout << "tutor" << std::endl;
        break;
    }
}

int main()
{
    UserData olli = {"Olli", 1234523, PermissionLevel::ADMIN, ExamPerson::TUTOR};
    UserData sigi = {"Sigi", 4436723, PermissionLevel::STUDENT, ExamPerson::STUDENT};

    greet_by_permission_level(olli);
    greet_by_permission_level(sigi);

    return 0;
}

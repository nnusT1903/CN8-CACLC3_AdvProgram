package Java;

public class StudentManagement {
    static Student[] students = new Student[100];
    Integer count = 0;
    public static boolean sameGroup(Student s1, Student s2){
        return s1.getGroup() == s2.getGroup();
    }

    public void addStudent(Student newStudent){
        students[count] = new Student(newStudent);
        count ++;
    }

    public String studentsByGroup(){

        return null;
    }

    public void removeStudent(String id) {
        // TODO:
    }

    public static void main(String[] args) {
        // TODO:
    }
}

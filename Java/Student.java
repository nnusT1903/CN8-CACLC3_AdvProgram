package Java;

public class Student {
    //attributes:
    private String name; 
    private String id;
    private String email;
    private String group;
    /**
     * Constructor.
     */

    public Student(){
        name = "Student";
        id = "000";
        group = "K62CB";
        email = "uet@vnu.edu.vn";
    }

    /* 
    * Constructor 2.
    */

    public Student(String name, String id, String email){
        this.name = name;
        this.id = id;
        this.email = email;
        this.group = "K62CB";
    }

    /**
     * Getters
     */
    public String getName(){
        return name;
    }

    public String getGroup(){
        return group;
    }

    /**
     * Setter
     */
    public void setName(String name){
        this.name = name;
    }

    /**
     * Get information
     */
    public String getInfo(){
        String temp = "";
        temp = temp + name + " - " ;
        temp = temp + id + " - " ;
        temp = temp + group + " - ";
        temp = temp + email;
        return temp;
    }

    /**
     * Copy Data
     */
    public Student(Student s){
        this.name = s.name;
        this.id = s.id;
        this.group = s.group;
        this.email = s.email;
    }

}
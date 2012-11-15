class Cat{
    string name_;
    int    age_;
public:
    Cat(const string& name, int age){
        name_ = name;
        age_ = age;
    }

    void setAge(int age){ age_ = age; }
    int  getAge(){ return age_; }
};

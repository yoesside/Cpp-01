class Users
{
private:
    string username;
    string password;
    string fullName;
    int phoneNo;

public:
    //default constructor line
    Users(string usName="", string ipass="", string iFullname="", int iPhoneno)
    {
        username = usName;
        password = ipass;
        fullname = iFullname;
        phoneNo = iPhoneno;
    }
    //default destructor line
    ~User()
    {

    }
    //line of getter
    string getUsername(){return username;
    }//Make the getter name is username
    string  getPassword(){return password;
    }//Make the getter name is password
    string getFullname(){return fullname;
    }//Make the getter name is fullname
    int getPhoneNo(){return phoneNo;
    }//Make the getter name is phoneNo

    //line of setter
    void setUsername(){return username = usName;
    }//Make the setter name is username
    void setPassword(){return password = ipass;
    }//Make the setter name is passowrd
    void setFullname(){return fullname = iFullname;
    }//Make the setter name is fullname

  void setPhoneNo(){return phoneNo = iPhoneno;
    }//Make the setter name is phoneNo
}

class Senior : public Users
{
private:
    string address;
public:
    //default constructor line
    Senior(string addressHome=""){
        address=addressHome;

    }
    //default destructor line
    ~Senior(){

    }
    //line of getter
    string getAddress(){return address;
    }//Make the name getter is address

    //line of setter
    void setAddress(string addressHome){address=addressHome;
    }//Make the name setter is address
};

class ServiceRequest
{
private:
    string requestID;
    string requiredDate;
    string notes;
    string status;


public:
    //default constructor
    ServiceRequest(string rqst_ID="", string rqrd_Date="", string note_S, string stts)
    {
        requestID = rqst_ID;
        requiredDate = rqrd_Date;
        notes = note_S;
        status = stts;
    }
    //default destructor
    ~ServiceRequest()
    {

    }

    //Line of getter
    string getRequestID(){return requestID;
    }//Make the name getter is requestID
    string getRequiredDate(){return requiredDate;
    }//Make the name getter is requiredDate
    string getNotes(){return notes;
    }//Make the name getter is notes
    string getStatus(){return status;
    }//Make the name getter is status

    //Line of setter
    void setRequestID(string rqst_ID){requestID = rqst_ID;
    }//Make the name of setter is requestID
    void setRequiredDate(string rqrd_Date){requiredDate = rqrd_Date;
    }//Make the name of setter is requiredDate
    void setNotes(string note_S){notes = note_S;
    }//Make the name of setter is notes
    void setStatus(string stts){status = stts;
    }//Make the name of setter is status

};

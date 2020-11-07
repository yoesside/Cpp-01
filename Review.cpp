class Review
{
private:
    string date;
    string rating;
    string comments;

public:
    //default constructor line
    Review(string ddmmyy="", string ratingView="", string commentUser="")
    {
        date= ddmmyy;
        rating= ratingView;
        comments= commentUser;
    }
    //default destructor line
    ~Review()
    {

    }
    //Line the getter
    string getDate(){return date;
    }//Make the name gatter is date
    string getRating(){return rating;
    }//Make the name getter is rating
    string getComments(){return comments;
    }//Make the name getter is comments \

    //Line the setter
    void setDate(ddmmyy){date= ddmmyy;;
    }//Make the name setter is date
    void setRating(ratingView){rating= ratingView;
    }//Make the name setter is rating
    void setComments(commentUser){comments= commentUser;
    }//MAke the name setter is comments
};

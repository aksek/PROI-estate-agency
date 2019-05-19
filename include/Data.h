#ifndef DATA_H
#define DATA_H


class Data
{
    public:
        Data() {}
        virtual std::string getInfo()=0;
        virtual unsigned getAge()=0;
        virtual void setData(unsigned ageFeed)=0;
    protected:
    private:
};

#endif // DATA_H

#include <iostream>

class Filter
{
public:
    virtual ~Filter() = default;
    virtual double filter(double value) = 0;
};



class NoPassFilter : public Filter
{
public:

    virtual ~NoPassFilter() = default;

    virtual double filter(double value) override
    {
        return 0.0;
    }

};


class PassThroughFilter : public Filter
{
public:

    virtual ~PassThroughFilter() = default;

    virtual double filter(double value) override
    {
        return value;
    }

};

class MarcusFilter : public Filter
{
public:

    virtual ~MarcusFilter() = default;

    virtual double filter(double value) override
    {
        if (value > 0.0) {
            return value;
        }else if (value < 0.0) {
            return 0.0;
        }else {
            return 0.0;
}
}
};


int main()
{

    Filter* filter = new MarcusFilter();

    double unfilteredValue = 0.9;
    while (unfilteredValue > 0.) {
        unfilteredValue -= 0.1;
        double filteredValue = filter->filter(unfilteredValue);

        std::cout << "Unfiltered value is: " << unfilteredValue
                  << ", filtered value is: " << filteredValue
                  << std::endl;

    }

    return 0;
}



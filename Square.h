
class Square{
    private:
    float length;
    public:
    void setLength(float l);
    float const getLength();
    float const getArea();
    Square();
    Square(float l);
    
    Square operator+(Square &plus);
    Square operator*(Square &divide);
};


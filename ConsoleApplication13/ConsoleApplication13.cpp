
#include <iostream>
using namespace std;

class CPU
{
protected:
    int price;
    string manufacturer;
public:
    int GetPrice()
    {
        return price;
    }
    string GetManufacturer()
    {
        return manufacturer;
    }
    void SetPrice(int a)
    {
        price = a;
    }
    void SetManufacturer(string a)
    {
        manufacturer = a;
    }
    void Output()
    {
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Price: " << price;
    }
};
class RAM 
{
protected:
    int frequency;
    int size;
public:
    int GetFrequency()
    {
        return frequency;
    }
    int GetSize()
    {
        return size;
    }
    void SetFrequency(int  a)
    {
        frequency = a;
    }
    void SetSize(int a)
    {
        size = a;
    }
    void Output()
    {
        cout << "Frequency: " << frequency << endl;
        cout << "Size: " << size;
    }

};
class SSD
{
protected:
    string manufacturer;
    string color;
public:
    string GetManufacturer()
    {
        return manufacturer;
    }
    string GetColor()
    {
        return color;
    }
    void SetManufacturer(string a)
    {
        manufacturer = a;
    }
    void SetColor(string a )
    {
        color = a;
    }
    void Output()
    {
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Color: " << color;
    }
};

class Mouse
{
protected:
    bool hasRGB;
    string color;
public:
    bool GetRGB()
    {
        return hasRGB;
    }
    string GetColor()
    {
        return color;
    }
    void SetRGB(bool a)
    {
        hasRGB = a;
    }
    void SetColor(string a)
    {
        color = a;
    }
    void Output()
    {
        if (hasRGB = true)
        {
            cout << "Has RGB" << endl;
        }
        else
        {
            cout << "No RGB" << endl;
        }

        cout << "Color: " << color;
    }
};
class Headphones
{
protected:
    string size;
    bool hasMic;
public:
    bool GetMic()
    {
        return hasMic;
    }
    string GetSize()
    {
        return size;
    }
    void SetMic(bool a)
    {
        hasMic = a;
    }
    void SetSize(string a)
    {
        size = a;
    }
    void Output()
    {
        if (hasMic= true)
        {
            cout << "Has MIC" << endl;
        }
        else
        {
            cout << "No MIC" << endl;
        }

        cout << "Size: " << size;
    }
};

class Keyboard
{
protected:
    string color;
    bool isMech;
public:
    bool GetMech()
    {
        return isMech;
    }
    string GetColor()
    {
        return color;
    }
    void SetMich(bool a)
    {
        isMech = a;
    }
    void SetColor(string a)
    {
        color = a;
    }
    void Output()
    {
        if (isMech = true)
        {
            cout << "Mechanical" << endl;
        }
        else
        {
            cout << "Not mechanical" << endl;
        }

        cout << "Color: " << color;
    }
};
class Monitor
{
protected:
    int width;
    int lenght;
public:
    int GetWidth()
    {
        return width;
    }
    int GetLenght()
    {
        return lenght;
    }
    void SetWidth(int a )
    {
        width = a;
    }
    void SetLenght(int a)
    {
        width = a;
    }
    void Output()
    {
        cout << "Width: " << width << endl << "Lenght: " << lenght;
    }

};


class PersonalComputer
{
private:


};


int main()
{
    std::cout << "Hello World!\n";
}


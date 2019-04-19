package com.example.graphruntime;


// This class just stores x and y and have getter and setter methods

public class XYValue {

    private double x;
    private double y;

    public XYValue(double x,double y)
    {
        this.x=x;
        this.y=y;
    }

    public double getX()
    {
        return x;
    }

    public void setX(double x)
    {
        this.x=x;
    }

    public double getY()
    {
        return y;
    }

    public void setY(double y)
    {
        this.y=y;
    }

}

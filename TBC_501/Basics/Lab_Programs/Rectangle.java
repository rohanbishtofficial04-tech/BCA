class Rectangle {
    double width;
    double height;

    Rectangle(double w, double h) {
        width = w;
        height = h;
    }
    double calculateArea() {
        return width * height;
    }
    public static void main(String[] args) {
        Rectangle rect = new Rectangle(5.5, 3.2);

        System.out.println("Width: " + rect.width);
        System.out.println("Height: " + rect.height);
        System.out.println("Area of Rectangle: " + rect.calculateArea());
    }
}


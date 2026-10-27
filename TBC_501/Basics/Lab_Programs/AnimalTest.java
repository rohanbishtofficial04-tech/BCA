class Animal {
    void makeSound() {
        System.out.println("Some generic animal sound");
    }

    void describe() {
        System.out.println("This is a generic animal.");
    }
}

class Lion extends Animal {
    @Override
    void makeSound() {
        System.out.println("The lion roars!");
    }

    @Override
    void describe() {
        System.out.println("The lion is known as the king of the jungle.");
    }
}

class Bird extends Animal {
    @Override
    void makeSound() {
        System.out.println("The bird chirps!");
    }

    @Override
    void describe() {
        System.out.println("The bird is a small creature that can fly.");
    }
}

class Frog extends Animal {
    @Override
    void makeSound() {
        System.out.println("The frog croaks!");
    }

    @Override
    void describe() {
        System.out.println("The frog is an amphibian that lives on land and water.");
    }
}

public class AnimalTest {
    public static void main(String[] args) {
        Lion lion = new Lion();
        Bird bird = new Bird();
        Frog frog = new Frog();

        System.out.println("Lion:");
        lion.makeSound();
        lion.describe();

        System.out.println("\nBird:");
        bird.makeSound();
        bird.describe();

        System.out.println("\nFrog:");
        frog.makeSound();
        frog.describe();
    }
}

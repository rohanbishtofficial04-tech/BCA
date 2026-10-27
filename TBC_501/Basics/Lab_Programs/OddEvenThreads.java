class OddPrinter implements Runnable {
    @Override
    public void run() {
        for (int i = 1; i < 20; i += 2) {
            System.out.println("Odd: " + i);
            try {
                Thread.sleep(100); // Sleep to simulate work
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
        }
    }
}
class EvenPrinter implements Runnable {
    @Override
    public void run() {
        for (int i = 2; i <= 20; i += 2) {
            System.out.println("Even: " + i);
            try {
                Thread.sleep(100); // Sleep to simulate work
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
        }
    }
}
public class OddEvenThreads {
    public static void main(String[] args) {
        Thread oddThread = new Thread(new OddPrinter());
        Thread evenThread = new Thread(new EvenPrinter());

        oddThread.start();
        evenThread.start();
    }
}

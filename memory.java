class Wrapper {
    int value;

    Wrapper(int value) {
        this.value = value;
    }
}

public class MemoryDemo {
    public static void main(String[] args) {
        Wrapper obj = new Wrapper(100); // Heap allocation
        printValue(obj); // Passing reference
        System.out.println("Still accessible " + obj.value);
    }

    static void printValue(Wrapper obj) {
        System.out.println("Value: " + obj.value);
    }
}
fn main() {
    let num = Box::new(100); // Heap allocation
    print_value(&num); // Borrowing reference
    println!("Still accessible: {}", num);
} // 'Box' is automatically deallocated when out of scope

fn print_value(val: &Box<i32>) {
    println!("Value: {}", val);
}
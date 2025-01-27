#[repr(C)]
pub struct Counter {
    value: i32,
}

#[no_mangle]
pub extern "C" fn read_counter(counter: *const Counter) -> i32 {
    if counter.is_null() {
        eprintln!("Rust: 널 포인터가 전달되었습니다!");
        return -1;
    }
    
    let counter = unsafe { &*counter };
    println!("Rust: 현재 카운터 값: {}", counter.value);
    counter.value
}

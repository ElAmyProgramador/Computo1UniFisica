program Cadenas
    implicit none
    character*10 :: a
    character*50 :: b
    character*100 :: x
    a = "Hola mundo"
    b = " Soy Allaichkseiv"
    print *, a, b
    x = a//trim(b)//"!"
    print *, x
end program Cadenas

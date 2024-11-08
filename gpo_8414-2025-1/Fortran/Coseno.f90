program Coseno
    implicit none
    integer :: i
    real :: x, s, PI
    PI = acos(-1.0)
    open(10, file = "coseno.dat")
    do i = 0, 100, 1
        x = 2.0*PI*real(i) / 100.0
        s = cos(x)
        write(10, '(2f10.4)') x, s
    end do
    close(10)
end program Coseno

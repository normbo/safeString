
safeString.o : safeString.c
    gcc -g -c -DTestSafe -o safeString.o safeString.c
    

testSafeString : safeString.c testSafeString.c
    gcc -g testSafeString.c safeString.c

#Conclusion

Making a full fledged library managment system in C++ is not necessary because:

1. If you implement it in heap memory, it is not suitable because a library does NOT require such high speed processing. The data is not going to be written at or requested at such high speed from the staff, because humans dont enter and exit libraries in lightning fast speed. Plus, the data will be lost after the application closes.
2. Now since using a database is suitable, you are left at the mercy of the write/read speed of the particular database, and hence the extra speed provided by C++ is basically not of any value now.

Just use a language like python or js and extra libraries to make work easier.

# Multithreaded-Echo-Client-Server-in-C

This is a simple client-server implementation of an echo server with multi-threaded support in C.

Objecttive:

  - Learn about the working and usage of pthreads in c and how multithreading works.
  - Learn about the concept of sockets and how they can be implemented in c.

The server-socket.c file contains the code for server and can be compiled with command gcc server-socket.c -o server

The client-socket.c file contains the code for client and can be compiled with command gcc client-socket.c -o client

Now fire the server with ./server command from terminal
Now fire the client with ./client command from different terminal.
I limited the number of threads to three, so only three connections can be handled by server at a time. You can easily chnage that.

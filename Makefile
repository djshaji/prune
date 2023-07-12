GTK_CFLAGS = `pkg-config gtk4 --cflags `
GTK_LIBS = `pkg-config  gtk4 --libs `
all: window main
	cc *.o $(GTK_LIBS)  $(GTK_CFLAGS) -o prune -w

main:
	cc main.c -c -g $(GTK_CFLAGS) -w

window:
	cc -c -g window.c $(GTK_CFLAGS) -w

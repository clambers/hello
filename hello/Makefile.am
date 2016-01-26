AM_CXXFLAGS = -fPIC
EXTRA_DIST = hello.qrc hello.qml com.jaguarlandrover.Hello.desktop.in com.jaguarlandrover.Hello.service.in
DISTCLEANFILES =

bin_PROGRAMS = hello
hello_SOURCES = application.c application.h qrc-hello.cc hello.cc hello.h
hello_CPPFLAGS = $(GLIB_CFLAGS) $(QT_CFLAGS)
hello_LDADD = $(GLIB_LIBS) $(QT_LIBS)

applicationdir = $(datadir)/applications
application_DATA = com.jaguarlandrover.Hello.desktop
EXTRA_DIST += $(application_DATA)
DISTCLEANFILES += $(application_DATA)

icondir = $(datadir)/icons/hicolor/scalable/apps
icon_DATA = hello.svg
EXTRA_DIST += $(icon_DATA)

servicedir = $(datadir)/dbus-1/services
service_DATA = com.jaguarlandrover.Hello.service
EXTRA_DIST += $(service_DATA)
DISTCLEANFILES += $(service_DATA)

qrc-%.cc: %.qrc
	$(AM_V_GEN) $(RCC) -o $@ $<

com.jaguarlandrover.Hello.desktop: com.jaguarlandrover.Hello.desktop.in Makefile
	$(AM_V_GEN) sed -e 's|@bindir[@]|$(bindir)|g' -e 's|@icondir[@]|$(icondir)|g' $< > $@

com.jaguarlandrover.Hello.service: com.jaguarlandrover.Hello.service.in Makefile
	$(AM_V_GEN) sed -e 's|@bindir[@]|$(bindir)|g' $< > $@

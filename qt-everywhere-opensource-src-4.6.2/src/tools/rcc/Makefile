#############################################################################
# Makefile for building: ../../../bin/rcc
# Generated by qmake (2.01a) (Qt 4.6.2) on: Mon Feb 13 21:48:58 2012
# Project:  rcc.pro
# Template: app
# Command: /home/wangg/FinalProject/qt-everywhere-opensource-src-4.6.2/bin/qmake -spec ../../../mkspecs/qws/linux-x86-g++ -unix -o Makefile rcc.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_RCC -DQT_BOOTSTRAPPED -DQT_LITE_UNICODE -DQT_TEXTCODEC -DQT_NO_CAST_FROM_ASCII -DQT_NO_CAST_TO_ASCII -DQT_NO_CODECS -DQT_NO_DATASTREAM -DQT_NO_GEOM_VARIANT -DQT_NO_LIBRARY -DQT_NO_QOBJECT -DQT_NO_STL -DQT_NO_SYSTEMLOCALE -DQT_NO_TEXTSTREAM -DQT_NO_THREAD -DQT_NO_UNICODETABLES -DQT_NO_USING_NAMESPACE -D_LARGEFILE64_SOURCE -D_LARGEFILE_SOURCE
CFLAGS        = -pipe -fno-exceptions -O2 -Wall -W $(DEFINES)
CXXFLAGS      = -pipe -fno-exceptions -O2 -Wall -W $(DEFINES)
INCPATH       = -I../../../mkspecs/qws/linux-x86-g++ -I. -I. -I. -I../../../include -I../../../include/QtCore -I../../../include/QtXml -I../../xml
LINK          = g++
LFLAGS        = -Wl,-rpath-link,/home/wangg/FinalProject/qt-everywhere-opensource-src-4.6.2/lib -fno-exceptions -Wl,-O1 -Wl,-rpath,/opt/qt-arm/lib -Wl,-rpath,/opt/qt-arm/lib
LIBS          = $(SUBLIBS)   -L/home/wangg/FinalProject/qt-everywhere-opensource-src-4.6.2/src/tools/bootstrap -lbootstrap -lz 
AR            = ar cqs
RANLIB        = 
QMAKE         = /home/wangg/FinalProject/qt-everywhere-opensource-src-4.6.2/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = .obj/release-shared-emb-arm/

####### Files

SOURCES       = rcc.cpp \
		main.cpp 
OBJECTS       = .obj/release-shared-emb-arm/rcc.o \
		.obj/release-shared-emb-arm/main.o
DIST          = ../../../mkspecs/common/g++.conf \
		../../../mkspecs/common/unix.conf \
		../../../mkspecs/common/linux.conf \
		../../../mkspecs/common/qws.conf \
		../../../mkspecs/features/exclusive_builds.prf \
		../../../mkspecs/features/default_pre.prf \
		../../../.qmake.cache \
		../../../mkspecs/qconfig.pri \
		../../../mkspecs/features/qt_functions.prf \
		../../../mkspecs/features/qt_config.prf \
		rcc.pri \
		../bootstrap/bootstrap.pri \
		../../qt_targets.pri \
		../../../mkspecs/features/release.prf \
		../../../mkspecs/features/default_post.prf \
		../../../mkspecs/features/unix/dylib.prf \
		../../../mkspecs/features/unix/largefile.prf \
		../../../mkspecs/features/dll.prf \
		../../../mkspecs/features/shared.prf \
		../../../mkspecs/features/warn_on.prf \
		../../../mkspecs/features/resources.prf \
		../../../mkspecs/features/uic.prf \
		../../../mkspecs/features/yacc.prf \
		../../../mkspecs/features/lex.prf \
		rcc.pro
QMAKE_TARGET  = rcc
DESTDIR       = ../../../bin/
TARGET        = ../../../bin/rcc

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	@$(CHK_DIR_EXISTS) ../../../bin/ || $(MKDIR) ../../../bin/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: rcc.pro ../../../.qmake.cache ../../../mkspecs/qws/linux-x86-g++/qmake.conf ../../../mkspecs/common/g++.conf \
		../../../mkspecs/common/unix.conf \
		../../../mkspecs/common/linux.conf \
		../../../mkspecs/common/qws.conf \
		../../../mkspecs/features/exclusive_builds.prf \
		../../../mkspecs/features/default_pre.prf \
		../../../.qmake.cache \
		../../../mkspecs/qconfig.pri \
		../../../mkspecs/features/qt_functions.prf \
		../../../mkspecs/features/qt_config.prf \
		rcc.pri \
		../bootstrap/bootstrap.pri \
		../../qt_targets.pri \
		../../../mkspecs/features/release.prf \
		../../../mkspecs/features/default_post.prf \
		../../../mkspecs/features/unix/dylib.prf \
		../../../mkspecs/features/unix/largefile.prf \
		../../../mkspecs/features/dll.prf \
		../../../mkspecs/features/shared.prf \
		../../../mkspecs/features/warn_on.prf \
		../../../mkspecs/features/resources.prf \
		../../../mkspecs/features/uic.prf \
		../../../mkspecs/features/yacc.prf \
		../../../mkspecs/features/lex.prf \
		/home/wangg/FinalProject/qt-everywhere-opensource-src-4.6.2/src/tools/bootstrap/libbootstrap.prl
	$(QMAKE) -spec ../../../mkspecs/qws/linux-x86-g++ -unix -o Makefile rcc.pro
../../../mkspecs/common/g++.conf:
../../../mkspecs/common/unix.conf:
../../../mkspecs/common/linux.conf:
../../../mkspecs/common/qws.conf:
../../../mkspecs/features/exclusive_builds.prf:
../../../mkspecs/features/default_pre.prf:
../../../.qmake.cache:
../../../mkspecs/qconfig.pri:
../../../mkspecs/features/qt_functions.prf:
../../../mkspecs/features/qt_config.prf:
rcc.pri:
../bootstrap/bootstrap.pri:
../../qt_targets.pri:
../../../mkspecs/features/release.prf:
../../../mkspecs/features/default_post.prf:
../../../mkspecs/features/unix/dylib.prf:
../../../mkspecs/features/unix/largefile.prf:
../../../mkspecs/features/dll.prf:
../../../mkspecs/features/shared.prf:
../../../mkspecs/features/warn_on.prf:
../../../mkspecs/features/resources.prf:
../../../mkspecs/features/uic.prf:
../../../mkspecs/features/yacc.prf:
../../../mkspecs/features/lex.prf:
/home/wangg/FinalProject/qt-everywhere-opensource-src-4.6.2/src/tools/bootstrap/libbootstrap.prl:
qmake:  FORCE
	@$(QMAKE) -spec ../../../mkspecs/qws/linux-x86-g++ -unix -o Makefile rcc.pro

dist: 
	@$(CHK_DIR_EXISTS) .obj/release-shared-emb-arm/rcc1.0.0 || $(MKDIR) .obj/release-shared-emb-arm/rcc1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .obj/release-shared-emb-arm/rcc1.0.0/ && (cd `dirname .obj/release-shared-emb-arm/rcc1.0.0` && $(TAR) rcc1.0.0.tar rcc1.0.0 && $(COMPRESS) rcc1.0.0.tar) && $(MOVE) `dirname .obj/release-shared-emb-arm/rcc1.0.0`/rcc1.0.0.tar.gz . && $(DEL_FILE) -r .obj/release-shared-emb-arm/rcc1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


compiler_rcc_make_all:
compiler_rcc_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

.obj/release-shared-emb-arm/rcc.o: rcc.cpp rcc.h \
		../../../include/QtCore/QStringList \
		../../../include/QtCore/qstringlist.h \
		../../corelib/tools/qstringlist.h \
		../../../include/QtCore/qalgorithms.h \
		../../corelib/tools/qalgorithms.h \
		../../../include/QtCore/qglobal.h \
		../../corelib/global/qglobal.h \
		../../corelib/global/qconfig.h \
		../../../include/QtCore/qfeatures.h \
		../../corelib/global/qfeatures.h \
		../../../include/QtCore/qdatastream.h \
		../../corelib/io/qdatastream.h \
		../../../include/QtCore/qscopedpointer.h \
		../../corelib/tools/qscopedpointer.h \
		../../../include/QtCore/qiodevice.h \
		../../corelib/io/qiodevice.h \
		../../../include/QtCore/qobject.h \
		../../corelib/kernel/qobject.h \
		../../../include/QtCore/qobjectdefs.h \
		../../corelib/kernel/qobjectdefs.h \
		../../../include/QtCore/qnamespace.h \
		../../corelib/global/qnamespace.h \
		../../../include/QtCore/qstring.h \
		../../corelib/tools/qstring.h \
		../../../include/QtCore/qchar.h \
		../../corelib/tools/qchar.h \
		../../../include/QtCore/qbytearray.h \
		../../corelib/tools/qbytearray.h \
		../../../include/QtCore/qatomic.h \
		../../corelib/thread/qatomic.h \
		../../../include/QtCore/qbasicatomic.h \
		../../corelib/thread/qbasicatomic.h \
		../../../include/QtCore/qatomic_bootstrap.h \
		../../corelib/arch/qatomic_bootstrap.h \
		../../../include/QtCore/qatomic_arch.h \
		../../corelib/arch/qatomic_arch.h \
		../../../include/QtCore/qatomic_vxworks.h \
		../../corelib/arch/qatomic_vxworks.h \
		../../../include/QtCore/qatomic_powerpc.h \
		../../corelib/arch/qatomic_powerpc.h \
		../../../include/QtCore/qatomic_alpha.h \
		../../corelib/arch/qatomic_alpha.h \
		../../../include/QtCore/qatomic_arm.h \
		../../corelib/arch/qatomic_arm.h \
		../../../include/QtCore/qatomic_armv6.h \
		../../corelib/arch/qatomic_armv6.h \
		../../../include/QtCore/qatomic_avr32.h \
		../../corelib/arch/qatomic_avr32.h \
		../../../include/QtCore/qatomic_bfin.h \
		../../corelib/arch/qatomic_bfin.h \
		../../../include/QtCore/qatomic_generic.h \
		../../corelib/arch/qatomic_generic.h \
		../../../include/QtCore/qatomic_i386.h \
		../../corelib/arch/qatomic_i386.h \
		../../../include/QtCore/qatomic_ia64.h \
		../../corelib/arch/qatomic_ia64.h \
		../../../include/QtCore/qatomic_macosx.h \
		../../corelib/arch/qatomic_macosx.h \
		../../../include/QtCore/qatomic_x86_64.h \
		../../corelib/arch/qatomic_x86_64.h \
		../../../include/QtCore/qatomic_mips.h \
		../../corelib/arch/qatomic_mips.h \
		../../../include/QtCore/qatomic_parisc.h \
		../../corelib/arch/qatomic_parisc.h \
		../../../include/QtCore/qatomic_s390.h \
		../../corelib/arch/qatomic_s390.h \
		../../../include/QtCore/qatomic_sparc.h \
		../../corelib/arch/qatomic_sparc.h \
		../../../include/QtCore/qatomic_windows.h \
		../../corelib/arch/qatomic_windows.h \
		../../../include/QtCore/qatomic_windowsce.h \
		../../corelib/arch/qatomic_windowsce.h \
		../../../include/QtCore/qatomic_symbian.h \
		../../corelib/arch/qatomic_symbian.h \
		../../../include/QtCore/qatomic_sh.h \
		../../corelib/arch/qatomic_sh.h \
		../../../include/QtCore/qatomic_sh4a.h \
		../../corelib/arch/qatomic_sh4a.h \
		../../../include/Qt3Support/q3cstring.h \
		../../qt3support/tools/q3cstring.h \
		../../../include/QtCore/qstringbuilder.h \
		../../corelib/tools/qstringbuilder.h \
		../../../include/QtCore/qmap.h \
		../../corelib/tools/qmap.h \
		../../../include/QtCore/qiterator.h \
		../../corelib/tools/qiterator.h \
		../../../include/QtCore/qlist.h \
		../../corelib/tools/qlist.h \
		../../../include/QtCore/qcoreevent.h \
		../../corelib/kernel/qcoreevent.h \
		../../../include/QtCore/qregexp.h \
		../../corelib/tools/qregexp.h \
		../../../include/QtCore/qstringmatcher.h \
		../../corelib/tools/qstringmatcher.h \
		../../../include/Qt3Support/q3valuelist.h \
		../../qt3support/tools/q3valuelist.h \
		../../../include/QtCore/qlinkedlist.h \
		../../corelib/tools/qlinkedlist.h \
		../../../include/QtCore/QHash \
		../../../include/QtCore/qhash.h \
		../../corelib/tools/qhash.h \
		../../../include/QtCore/qpair.h \
		../../corelib/tools/qpair.h \
		../../../include/QtCore/QString \
		../../../include/QtCore/QByteArray \
		../../../include/QtCore/QDateTime \
		../../../include/QtCore/qdatetime.h \
		../../corelib/tools/qdatetime.h \
		../../../include/QtCore/qsharedpointer.h \
		../../corelib/tools/qsharedpointer.h \
		../../../include/QtCore/qshareddata.h \
		../../corelib/tools/qshareddata.h \
		../../../include/QtCore/qsharedpointer_impl.h \
		../../corelib/tools/qsharedpointer_impl.h \
		../../../include/QtCore/QDebug \
		../../../include/QtCore/qdebug.h \
		../../corelib/io/qdebug.h \
		../../../include/QtCore/qtextstream.h \
		../../corelib/io/qtextstream.h \
		../../../include/QtCore/qlocale.h \
		../../corelib/tools/qlocale.h \
		../../../include/QtCore/qtextcodec.h \
		../../corelib/codecs/qtextcodec.h \
		../../../include/QtCore/qvector.h \
		../../corelib/tools/qvector.h \
		../../../include/QtCore/QPointF \
		../../../include/QtCore/qpoint.h \
		../../corelib/tools/qpoint.h \
		../../../include/QtCore/QPoint \
		../../../include/QtCore/qset.h \
		../../corelib/tools/qset.h \
		../../../include/QtCore/qcontiguouscache.h \
		../../corelib/tools/qcontiguouscache.h \
		../../../include/QtCore/QDir \
		../../../include/QtCore/qdir.h \
		../../corelib/io/qdir.h \
		../../../include/QtCore/qfileinfo.h \
		../../corelib/io/qfileinfo.h \
		../../../include/QtCore/qfile.h \
		../../corelib/io/qfile.h \
		../../../include/QtCore/QDirIterator \
		../../../include/QtCore/qdiriterator.h \
		../../corelib/io/qdiriterator.h \
		../../../include/QtCore/QFile \
		../../../include/QtCore/QIODevice \
		../../../include/QtCore/QLocale \
		../../../include/QtCore/QStack \
		../../../include/QtCore/qstack.h \
		../../corelib/tools/qstack.h \
		../../../include/QtXml/QDomDocument \
		../../../include/QtXml/qdom.h \
		../../xml/dom/qdom.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .obj/release-shared-emb-arm/rcc.o rcc.cpp

.obj/release-shared-emb-arm/main.o: main.cpp rcc.h \
		../../../include/QtCore/QStringList \
		../../../include/QtCore/qstringlist.h \
		../../corelib/tools/qstringlist.h \
		../../../include/QtCore/qalgorithms.h \
		../../corelib/tools/qalgorithms.h \
		../../../include/QtCore/qglobal.h \
		../../corelib/global/qglobal.h \
		../../corelib/global/qconfig.h \
		../../../include/QtCore/qfeatures.h \
		../../corelib/global/qfeatures.h \
		../../../include/QtCore/qdatastream.h \
		../../corelib/io/qdatastream.h \
		../../../include/QtCore/qscopedpointer.h \
		../../corelib/tools/qscopedpointer.h \
		../../../include/QtCore/qiodevice.h \
		../../corelib/io/qiodevice.h \
		../../../include/QtCore/qobject.h \
		../../corelib/kernel/qobject.h \
		../../../include/QtCore/qobjectdefs.h \
		../../corelib/kernel/qobjectdefs.h \
		../../../include/QtCore/qnamespace.h \
		../../corelib/global/qnamespace.h \
		../../../include/QtCore/qstring.h \
		../../corelib/tools/qstring.h \
		../../../include/QtCore/qchar.h \
		../../corelib/tools/qchar.h \
		../../../include/QtCore/qbytearray.h \
		../../corelib/tools/qbytearray.h \
		../../../include/QtCore/qatomic.h \
		../../corelib/thread/qatomic.h \
		../../../include/QtCore/qbasicatomic.h \
		../../corelib/thread/qbasicatomic.h \
		../../../include/QtCore/qatomic_bootstrap.h \
		../../corelib/arch/qatomic_bootstrap.h \
		../../../include/QtCore/qatomic_arch.h \
		../../corelib/arch/qatomic_arch.h \
		../../../include/QtCore/qatomic_vxworks.h \
		../../corelib/arch/qatomic_vxworks.h \
		../../../include/QtCore/qatomic_powerpc.h \
		../../corelib/arch/qatomic_powerpc.h \
		../../../include/QtCore/qatomic_alpha.h \
		../../corelib/arch/qatomic_alpha.h \
		../../../include/QtCore/qatomic_arm.h \
		../../corelib/arch/qatomic_arm.h \
		../../../include/QtCore/qatomic_armv6.h \
		../../corelib/arch/qatomic_armv6.h \
		../../../include/QtCore/qatomic_avr32.h \
		../../corelib/arch/qatomic_avr32.h \
		../../../include/QtCore/qatomic_bfin.h \
		../../corelib/arch/qatomic_bfin.h \
		../../../include/QtCore/qatomic_generic.h \
		../../corelib/arch/qatomic_generic.h \
		../../../include/QtCore/qatomic_i386.h \
		../../corelib/arch/qatomic_i386.h \
		../../../include/QtCore/qatomic_ia64.h \
		../../corelib/arch/qatomic_ia64.h \
		../../../include/QtCore/qatomic_macosx.h \
		../../corelib/arch/qatomic_macosx.h \
		../../../include/QtCore/qatomic_x86_64.h \
		../../corelib/arch/qatomic_x86_64.h \
		../../../include/QtCore/qatomic_mips.h \
		../../corelib/arch/qatomic_mips.h \
		../../../include/QtCore/qatomic_parisc.h \
		../../corelib/arch/qatomic_parisc.h \
		../../../include/QtCore/qatomic_s390.h \
		../../corelib/arch/qatomic_s390.h \
		../../../include/QtCore/qatomic_sparc.h \
		../../corelib/arch/qatomic_sparc.h \
		../../../include/QtCore/qatomic_windows.h \
		../../corelib/arch/qatomic_windows.h \
		../../../include/QtCore/qatomic_windowsce.h \
		../../corelib/arch/qatomic_windowsce.h \
		../../../include/QtCore/qatomic_symbian.h \
		../../corelib/arch/qatomic_symbian.h \
		../../../include/QtCore/qatomic_sh.h \
		../../corelib/arch/qatomic_sh.h \
		../../../include/QtCore/qatomic_sh4a.h \
		../../corelib/arch/qatomic_sh4a.h \
		../../../include/Qt3Support/q3cstring.h \
		../../qt3support/tools/q3cstring.h \
		../../../include/QtCore/qstringbuilder.h \
		../../corelib/tools/qstringbuilder.h \
		../../../include/QtCore/qmap.h \
		../../corelib/tools/qmap.h \
		../../../include/QtCore/qiterator.h \
		../../corelib/tools/qiterator.h \
		../../../include/QtCore/qlist.h \
		../../corelib/tools/qlist.h \
		../../../include/QtCore/qcoreevent.h \
		../../corelib/kernel/qcoreevent.h \
		../../../include/QtCore/qregexp.h \
		../../corelib/tools/qregexp.h \
		../../../include/QtCore/qstringmatcher.h \
		../../corelib/tools/qstringmatcher.h \
		../../../include/Qt3Support/q3valuelist.h \
		../../qt3support/tools/q3valuelist.h \
		../../../include/QtCore/qlinkedlist.h \
		../../corelib/tools/qlinkedlist.h \
		../../../include/QtCore/QHash \
		../../../include/QtCore/qhash.h \
		../../corelib/tools/qhash.h \
		../../../include/QtCore/qpair.h \
		../../corelib/tools/qpair.h \
		../../../include/QtCore/QString \
		../../corelib/kernel/qcorecmdlineargs_p.h \
		../../../include/QtCore/qvector.h \
		../../corelib/tools/qvector.h \
		../../../include/QtCore/QPointF \
		../../../include/QtCore/qpoint.h \
		../../corelib/tools/qpoint.h \
		../../../include/QtCore/QPoint \
		../../../include/QtCore/qt_windows.h \
		../../corelib/global/qt_windows.h \
		../../../include/QtCore/QDebug \
		../../../include/QtCore/qdebug.h \
		../../corelib/io/qdebug.h \
		../../../include/QtCore/qtextstream.h \
		../../corelib/io/qtextstream.h \
		../../../include/QtCore/qlocale.h \
		../../corelib/tools/qlocale.h \
		../../../include/QtCore/qtextcodec.h \
		../../corelib/codecs/qtextcodec.h \
		../../../include/QtCore/qset.h \
		../../corelib/tools/qset.h \
		../../../include/QtCore/qcontiguouscache.h \
		../../corelib/tools/qcontiguouscache.h \
		../../../include/QtCore/QDir \
		../../../include/QtCore/qdir.h \
		../../corelib/io/qdir.h \
		../../../include/QtCore/qfileinfo.h \
		../../corelib/io/qfileinfo.h \
		../../../include/QtCore/qfile.h \
		../../corelib/io/qfile.h \
		../../../include/QtCore/QFile \
		../../../include/QtCore/QFileInfo \
		../../../include/QtCore/QTextStream
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .obj/release-shared-emb-arm/main.o main.cpp

####### Install

install_target: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/opt/qt-arm/bin/ || $(MKDIR) $(INSTALL_ROOT)/opt/qt-arm/bin/ 
	-$(INSTALL_PROGRAM) "../../../bin/$(QMAKE_TARGET)" "$(INSTALL_ROOT)/opt/qt-arm/bin/$(QMAKE_TARGET)"
	-$(STRIP) "$(INSTALL_ROOT)/opt/qt-arm/bin/$(QMAKE_TARGET)"

uninstall_target:  FORCE
	-$(DEL_FILE) "$(INSTALL_ROOT)/opt/qt-arm/bin/$(QMAKE_TARGET)"
	-$(DEL_DIR) $(INSTALL_ROOT)/opt/qt-arm/bin/ 


install:  install_target  FORCE

uninstall: uninstall_target   FORCE

FORCE:


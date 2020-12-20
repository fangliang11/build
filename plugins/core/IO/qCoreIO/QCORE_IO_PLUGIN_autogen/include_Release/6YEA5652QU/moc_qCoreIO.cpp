/****************************************************************************
** Meta object code from reading C++ file 'qCoreIO.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../plugins/core/IO/qCoreIO/include/qCoreIO.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qCoreIO.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qCoreIO_t {
    QByteArrayData data[1];
    char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qCoreIO_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qCoreIO_t qt_meta_stringdata_qCoreIO = {
    {
QT_MOC_LITERAL(0, 0, 7) // "qCoreIO"

    },
    "qCoreIO"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qCoreIO[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void qCoreIO::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject qCoreIO::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qCoreIO.data,
    qt_meta_data_qCoreIO,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qCoreIO::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qCoreIO::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qCoreIO.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ccIOPluginInterface"))
        return static_cast< ccIOPluginInterface*>(this);
    if (!strcmp(_clname, "cccorp.cloudcompare.ccPluginInterface/3.2"))
        return static_cast< ccPluginInterface*>(this);
    if (!strcmp(_clname, "cccorp.cloudcompare.ccIOPluginInterface/1.3"))
        return static_cast< ccIOPluginInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int qCoreIO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x22,  'c',  'c',  'c',  'o',  'r', 
    'p',  '.',  'c',  'l',  'o',  'u',  'd',  'c', 
    'o',  'm',  'p',  'a',  'r',  'e',  '.',  'p', 
    'l',  'u',  'g',  'i',  'n',  '.',  'q',  'C', 
    'o',  'r',  'e',  'I',  'O', 
    // "className"
    0x03,  0x67,  'q',  'C',  'o',  'r',  'e',  'I', 
    'O', 
    // "MetaData"
    0x04,  0xa4,  0x64,  'c',  'o',  'r',  'e',  0xf5, 
    0x6b,  'd',  'e',  's',  'c',  'r',  'i',  'p', 
    't',  'i',  'o',  'n',  0x78,  0x2e,  'A',  'l', 
    'l',  'o',  'w',  's',  ' ',  'r',  'e',  'a', 
    'd',  'i',  'n',  'g',  ' ',  '&',  ' ',  'w', 
    'r',  'i',  't',  'i',  'n',  'g',  ' ',  'o', 
    'f',  ' ',  'm',  'a',  'n',  'y',  ' ',  'f', 
    'i',  'l',  'e',  ' ',  'f',  'o',  'r',  'm', 
    'a',  't',  's',  '.',  0x64,  'n',  'a',  'm', 
    'e',  0x68,  'C',  'o',  'r',  'e',  ' ',  'I', 
    '/',  'O',  0x64,  't',  'y',  'p',  'e',  0x63, 
    'I',  '/',  'O', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(qCoreIO, qCoreIO)

QT_WARNING_POP
QT_END_MOC_NAMESPACE

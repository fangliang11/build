/****************************************************************************
** Meta object code from reading C++ file 'ExampleIOPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../plugins/example/ExampleIOPlugin/include/ExampleIOPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExampleIOPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExampleIOPlugin_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExampleIOPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExampleIOPlugin_t qt_meta_stringdata_ExampleIOPlugin = {
    {
QT_MOC_LITERAL(0, 0, 15) // "ExampleIOPlugin"

    },
    "ExampleIOPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExampleIOPlugin[] = {

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

void ExampleIOPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ExampleIOPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ExampleIOPlugin.data,
    qt_meta_data_ExampleIOPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExampleIOPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExampleIOPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExampleIOPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ccIOPluginInterface"))
        return static_cast< ccIOPluginInterface*>(this);
    if (!strcmp(_clname, "cccorp.cloudcompare.ccPluginInterface/3.2"))
        return static_cast< ccPluginInterface*>(this);
    if (!strcmp(_clname, "cccorp.cloudcompare.ccIOPluginInterface/1.3"))
        return static_cast< ccIOPluginInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int ExampleIOPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0x02,  0x78,  0x24,  'c',  'c',  'c',  'o',  'r', 
    'p',  '.',  'c',  'l',  'o',  'u',  'd',  'c', 
    'o',  'm',  'p',  'a',  'r',  'e',  '.',  'p', 
    'l',  'u',  'g',  'i',  'n',  '.',  'E',  'x', 
    'a',  'm',  'p',  'l',  'e',  'I',  'O', 
    // "className"
    0x03,  0x6f,  'E',  'x',  'a',  'm',  'p',  'l', 
    'e',  'I',  'O',  'P',  'l',  'u',  'g',  'i', 
    'n', 
    // "MetaData"
    0x04,  0xa6,  0x67,  'a',  'u',  't',  'h',  'o', 
    'r',  's',  0x81,  0xa2,  0x65,  'e',  'm',  'a', 
    'i',  'l',  0x73,  'a',  's',  'm',  'a',  'l', 
    'o',  'n',  'e',  'y',  '@',  'g',  'm',  'a', 
    'i',  'l',  '.',  'c',  'o',  'm',  0x64,  'n', 
    'a',  'm',  'e',  0x6c,  'A',  'n',  'd',  'y', 
    ' ',  'M',  'a',  'l',  'o',  'n',  'e',  'y', 
    0x6b,  'd',  'e',  's',  'c',  'r',  'i',  'p', 
    't',  'i',  'o',  'n',  0x78,  0x89,  'T',  'h', 
    'i',  's',  ' ',  'p',  'l',  'u',  'g',  'i', 
    'n',  ' ',  'i',  's',  ' ',  'a',  'n',  ' ', 
    'e',  'x',  'a',  'm',  'p',  'l',  'e',  ' ', 
    'o',  'f',  ' ',  'h',  'o',  'w',  ' ',  't', 
    'o',  ' ',  'a',  'd',  'd',  ' ',  'I',  '/', 
    'O',  ' ',  'f',  'o',  'r',  ' ',  'a',  ' ', 
    'n',  'e',  'w',  ' ',  'f',  'i',  'l',  'e', 
    ' ',  'f',  'o',  'r',  'm',  'a',  't',  '.', 
    ' ',  'I',  't',  ' ',  'c',  'o',  'u',  'n', 
    't',  's',  ' ',  't',  'h',  'e',  ' ',  'n', 
    'u',  'm',  'b',  'e',  'r',  ' ',  'o',  'f', 
    ' ',  'o',  'c',  'c',  'u',  'r',  'e',  'n', 
    'e',  'c',  's',  ' ',  'o',  'f',  ' ',  't', 
    'h',  'e',  ' ',  's',  't',  'r',  'i',  'n', 
    'g',  ' ',  '\'', 'f',  'o',  'o',  '\'', ' ', 
    'i',  'n',  ' ',  'a',  ' ',  't',  'e',  'x', 
    't',  ' ',  'f',  'i',  'l',  'e',  '.',  0x6b, 
    'm',  'a',  'i',  'n',  't',  'a',  'i',  'n', 
    'e',  'r',  's',  0x81,  0xa2,  0x65,  'e',  'm', 
    'a',  'i',  'l',  0x73,  'a',  's',  'm',  'a', 
    'l',  'o',  'n',  'e',  'y',  '@',  'g',  'm', 
    'a',  'i',  'l',  '.',  'c',  'o',  'm',  0x64, 
    'n',  'a',  'm',  'e',  0x6c,  'A',  'n',  'd', 
    'y',  ' ',  'M',  'a',  'l',  'o',  'n',  'e', 
    'y',  0x64,  'n',  'a',  'm',  'e',  0x74,  'E', 
    'x',  'a',  'm',  'p',  'l',  'e',  ' ',  '(', 
    'I',  '/',  'O',  ' ',  'P',  'l',  'u',  'g', 
    'i',  'n',  ')',  0x6a,  'r',  'e',  'f',  'e', 
    'r',  'e',  'n',  'c',  'e',  's',  0x81,  0xa2, 
    0x64,  't',  'e',  'x',  't',  0x6a,  'F',  'O', 
    'O',  ' ',  'f',  'o',  'r',  'm',  'a',  't', 
    0x63,  'u',  'r',  'l',  0x78,  0x24,  'h',  't', 
    't',  'p',  's',  ':',  '/',  '/',  'e',  'n', 
    '.',  'w',  'i',  'k',  'i',  'p',  'e',  'd', 
    'i',  'a',  '.',  'o',  'r',  'g',  '/',  'w', 
    'i',  'k',  'i',  '/',  'F',  'o',  'o',  'b', 
    'a',  'r',  0x64,  't',  'y',  'p',  'e',  0x63, 
    'I',  '/',  'O', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(ExampleIOPlugin, ExampleIOPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE

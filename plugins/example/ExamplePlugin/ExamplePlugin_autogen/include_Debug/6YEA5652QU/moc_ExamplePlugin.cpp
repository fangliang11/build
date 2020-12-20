/****************************************************************************
** Meta object code from reading C++ file 'ExamplePlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../plugins/example/ExamplePlugin/include/ExamplePlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExamplePlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExamplePlugin_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExamplePlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExamplePlugin_t qt_meta_stringdata_ExamplePlugin = {
    {
QT_MOC_LITERAL(0, 0, 13) // "ExamplePlugin"

    },
    "ExamplePlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExamplePlugin[] = {

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

void ExamplePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ExamplePlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ExamplePlugin.data,
    qt_meta_data_ExamplePlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExamplePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExamplePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExamplePlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ccStdPluginInterface"))
        return static_cast< ccStdPluginInterface*>(this);
    if (!strcmp(_clname, "cccorp.cloudcompare.ccPluginInterface/3.2"))
        return static_cast< ccPluginInterface*>(this);
    if (!strcmp(_clname, "cccorp.cloudcompare.ccStdPluginInterface/1.5"))
        return static_cast< ccStdPluginInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int ExamplePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    'l',  'u',  'g',  'i',  'n',  '.',  'E',  'x', 
    'a',  'm',  'p',  'l',  'e', 
    // "className"
    0x03,  0x6d,  'E',  'x',  'a',  'm',  'p',  'l', 
    'e',  'P',  'l',  'u',  'g',  'i',  'n', 
    // "MetaData"
    0x04,  0xa7,  0x67,  'a',  'u',  't',  'h',  'o', 
    'r',  's',  0x81,  0xa2,  0x65,  'e',  'm',  'a', 
    'i',  'l',  0x78,  0x1a,  'd',  'a',  'n',  'i', 
    'e',  'l',  '.',  'g',  'i',  'r',  'a',  'r', 
    'd',  'e',  'a',  'u',  '@',  'g',  'm',  'a', 
    'i',  'l',  '.',  'c',  'o',  'm',  0x64,  'n', 
    'a',  'm',  'e',  0x78,  0x18,  'D',  'a',  'n', 
    'i',  'e',  'l',  ' ',  'G',  'i',  'r',  'a', 
    'r',  'd',  'e',  'a',  'u',  '-',  'M',  'o', 
    'n',  't',  'a',  'u',  't',  0x6b,  'd',  'e', 
    's',  'c',  'r',  'i',  'p',  't',  'i',  'o', 
    'n',  0x78,  0x47,  'T',  'h',  'i',  's',  ' ', 
    'i',  's',  ' ',  'a',  ' ',  'd',  'e',  's', 
    'c',  'r',  'i',  'p',  't',  'i',  'o',  'n', 
    ' ',  'o',  'f',  ' ',  't',  'h',  'e',  ' ', 
    'm',  'a',  'r',  'v',  'e',  'l',  'o',  'u', 
    's',  ' ',  'E',  'x',  'a',  'm',  'p',  'l', 
    'e',  ' ',  'p',  'l',  'u',  'g',  'i',  'n', 
    '.',  ' ',  'I',  't',  ' ',  'd',  'o',  'e', 
    's',  ' ',  'n',  'o',  't',  'h',  'i',  'n', 
    'g',  '.',  0x64,  'i',  'c',  'o',  'n',  0x78, 
    0x29,  ':',  '/',  'C',  'C',  '/',  'p',  'l', 
    'u',  'g',  'i',  'n',  '/',  'E',  'x',  'a', 
    'm',  'p',  'l',  'e',  'P',  'l',  'u',  'g', 
    'i',  'n',  '/',  'i',  'm',  'a',  'g',  'e', 
    's',  '/',  'i',  'c',  'o',  'n',  '.',  'p', 
    'n',  'g',  0x6b,  'm',  'a',  'i',  'n',  't', 
    'a',  'i',  'n',  'e',  'r',  's',  0x82,  0xa2, 
    0x65,  'e',  'm',  'a',  'i',  'l',  0x73,  'a', 
    's',  'm',  'a',  'l',  'o',  'n',  'e',  'y', 
    '@',  'g',  'm',  'a',  'i',  'l',  '.',  'c', 
    'o',  'm',  0x64,  'n',  'a',  'm',  'e',  0x6c, 
    'A',  'n',  'd',  'y',  ' ',  'M',  'a',  'l', 
    'o',  'n',  'e',  'y',  0xa1,  0x64,  'n',  'a', 
    'm',  'e',  0x6f,  'E',  'x',  'a',  'm',  'p', 
    'l',  'e',  ' ',  'N',  'o',  'E',  'm',  'a', 
    'i',  'l',  0x64,  'n',  'a',  'm',  'e',  0x78, 
    0x19,  'E',  'x',  'a',  'm',  'p',  'l',  'e', 
    ' ',  '(',  'S',  't',  'a',  'n',  'd',  'a', 
    'r',  'd',  ' ',  'P',  'l',  'u',  'g',  'i', 
    'n',  ')',  0x6a,  'r',  'e',  'f',  'e',  'r', 
    'e',  'n',  'c',  'e',  's',  0x83,  0xa2,  0x64, 
    't',  'e',  'x',  't',  0x78,  0x41,  'T',  'h', 
    'e',  ' ',  'u',  'n',  's',  'u',  'c',  'c', 
    'e',  's',  's',  'f',  'u',  'l',  ' ',  's', 
    'e',  'l',  'f',  '-',  't',  'r',  'e',  'a', 
    't',  'm',  'e',  'n',  't',  ' ',  'o',  'f', 
    ' ',  'a',  ' ',  'c',  'a',  's',  'e',  ' ', 
    'o',  'f',  ' ',  uchar('\xe2'), uchar('\x80'), uchar('\x9c'), 'w',  'r', 
    'i',  't',  'e',  'r',  '\'', 's',  ' ',  'b', 
    'l',  'o',  'c',  'k',  uchar('\xe2'), uchar('\x80'), uchar('\x9d'), 0x63, 
    'u',  'r',  'l',  0x78,  0x35,  'h',  't',  't', 
    'p',  's',  ':',  '/',  '/',  'w',  'w',  'w', 
    '.',  'n',  'c',  'b',  'i',  '.',  'n',  'l', 
    'm',  '.',  'n',  'i',  'h',  '.',  'g',  'o', 
    'v',  '/',  'p',  'm',  'c',  '/',  'a',  'r', 
    't',  'i',  'c',  'l',  'e',  's',  '/',  'P', 
    'M',  'C',  '1',  '3',  '1',  '1',  '9',  '9', 
    '7',  '/',  0xa2,  0x64,  't',  'e',  'x',  't', 
    0x78,  0x25,  'S',  'w',  'o',  'r',  'd',  ' ', 
    's',  'w',  'a',  'l',  'l',  'o',  'w',  'i', 
    'n',  'g',  ' ',  'a',  'n',  'd',  ' ',  'i', 
    't',  's',  ' ',  's',  'i',  'd',  'e',  ' ', 
    'e',  'f',  'f',  'e',  'c',  't',  's',  0x63, 
    'u',  'r',  'l',  0x78,  0x28,  'h',  't',  't', 
    'p',  ':',  '/',  '/',  'w',  'w',  'w',  '.', 
    'b',  'm',  'j',  '.',  'c',  'o',  'm',  '/', 
    'c',  'o',  'n',  't',  'e',  'n',  't',  '/', 
    '3',  '3',  '3',  '/',  '7',  '5',  '8',  '2', 
    '/',  '1',  '2',  '8',  '5',  0xa1,  0x64,  't', 
    'e',  'x',  't',  0x78,  0x55,  'I',  ' ',  't', 
    'h',  'o',  'u',  'g',  'h',  't',  ' ',  'o', 
    'f',  ' ',  'c',  'r',  'e',  'a',  't',  'i', 
    'n',  'g',  ' ',  't',  'h',  'i',  's',  ' ', 
    'w',  'o',  'n',  'd',  'e',  'r',  'f',  'u', 
    'l',  ' ',  'p',  'l',  'u',  'g',  'i',  'n', 
    ' ',  'w',  'h',  'i',  'l',  'e',  ' ',  'I', 
    ' ',  'w',  'a',  's',  ' ',  'h',  'i',  'k', 
    'i',  'n',  'g',  ' ',  'u',  'p',  ' ',  '&', 
    '#',  'x',  '2',  '6',  'f',  '0',  ';',  ' ', 
    'M',  'o',  'n',  't',  ' ',  'B',  'l',  'a', 
    'n',  'c',  0x64,  't',  'y',  'p',  'e',  0x68, 
    'S',  't',  'a',  'n',  'd',  'a',  'r',  'd', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(ExamplePlugin, ExamplePlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE

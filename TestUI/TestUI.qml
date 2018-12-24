import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    visible: true
    width: 300
    height: 300
    MouseArea {
        anchors.fill: parent
        onClicked: {
            Qt.quit();
        }
    }

    Text {
        text: qsTr("Hello World, I hate you")
        anchors.centerIn: parent
    }
}

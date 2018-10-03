import QtQuick 2.4

Item {
    id: item1
    width: 350
    height: 118

    Rectangle {
        id: button
        x: 25
        y: 184
        width: 350
        height: 118
        color: "#f51c1c"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter

        Text {
            id: display
            x: 8
            y: 44
            width: 318
            height: 48
            text: qsTr("Submit")
            horizontalAlignment: Text.AlignHCenter
            font.bold: true
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            lineHeight: 0.4
            elide: Text.ElideMiddle
            font.pixelSize: 24
        }
    }
}

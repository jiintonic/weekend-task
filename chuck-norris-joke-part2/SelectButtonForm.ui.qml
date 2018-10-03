import QtQuick 2.4

Item {
    id: item1
    width: 320
    height: 118

    Rectangle {
        id: button
        x: 25
        y: 184
        width: 320
        height: 118
        color: "#66f61d"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter

        Text {
            id: display
            x: 8
            y: 44
            width: 318
            height: 48
            text: "Select Audio File"
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

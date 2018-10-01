import QtQuick 2.10
import QtQuick.Window 2.10
import com.mbrdna.joke 1.0

Window {
    visible: true
    width: 640
    height: 480
    opacity: 0.8
    title: qsTr("Chuck Norris Joke Generator")

    Background {
        id: background
        anchors.fill: parent

        JokeRequest{
            id:jokeRequest
            onJokeReadReady:{
                display.text = joke;
            }
        }

        JokeButton {
            id: jokeButton
            x: 171
            y: 310
            anchors.horizontalCenterOffset: -7
            anchors.horizontalCenter: parent.horizontalCenter

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    jokeRequest.makeRequest();
                }
            }
        }

        Text {
            id: display
            x: 91
            y: 18
            width: 484
            height: 271
            color: "#ffffff"
            text: qsTr("Welcome to Chuck Norris Joke Generator")
            anchors.verticalCenterOffset: 67
            anchors.horizontalCenterOffset: 0
            wrapMode: Text.WrapAtWordBoundaryOrAnywhere
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            horizontalAlignment: Text.AlignHCenter
            fontSizeMode: Text.FixedSize
            font.bold: true
            font.pixelSize: 20
        }
    }
}

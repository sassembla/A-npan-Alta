package a_npan_alta.head

import android.util.Log
import android.app.Activity
import android.content.Context
import com.unity3d.player.UnityPlayer
import com.unity3d.player.UnityPlayer.UnitySendMessage

@Suppress("unused")
class Bridge {
    fun initialize(context:Context, message:String) {
        Log.d("debug","context:" + context + " message:" + message)
    }
}
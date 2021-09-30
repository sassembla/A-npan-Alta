package a_npan_alta.head

import android.app.Activity
import android.util.Log
import android.content.Context

@Suppress("unused")
class Bridge {
    fun initialize(activity: Activity, message:String) {
        Log.d("debug","activity:" + activity + " message:" + message)
    }
}
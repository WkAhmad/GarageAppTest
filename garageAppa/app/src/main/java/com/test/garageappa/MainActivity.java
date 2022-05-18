package com.test.garageappa;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Button btnClick = findViewById(R.id.buttonClicked);
        btnClick.setOnClickListener(v -> {
            Intent intent = new Intent(MainActivity.this, UnityHolderActivity.class);
            intent.putExtra("placeId", 1);
            startActivity(intent);
        });
    }
}
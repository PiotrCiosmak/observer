package com.ciosmak;

import com.ciosmak.client.EnemyShip;
import com.ciosmak.client.FriendlyShip;
import com.ciosmak.radar.Radar;

public class Main
{
    public static void main(String[] args)
    {
        Radar radar = new Radar();
        radar.addSubscriber(new EnemyShip());
        radar.addSubscriber(new FriendlyShip());

        radar.startWork();
    }
}